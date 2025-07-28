#include "PasteService.h"
#include "Base62Encoder.h"
#include <sstream>

PasteService::PasteService() : pasteIdCounter(1), baseDomain("http://paste.bin/")
{
    // Initialization, etc.
}

std::string PasteService::createPaste(const std::string& content)
{
    std::string key = Base62Encoder::encode(pasteIdCounter++);
    pasteMap[key] = content;
    return baseDomain + key;
}

std::string PasteService::getPaste(const std::string& pasteUrl)
{
    std::string key = pasteUrl.substr(pasteUrl.find_last_of("/") + 1);

    if(pasteMap.find(key) != pasteMap.end())
    return pasteMap[key];

    return "Paste not found.";
}