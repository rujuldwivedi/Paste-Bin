#ifndef PASTESERVICE_H
#define PASTESERVICE_H

#include <unordered_map>
#include <string>

class PasteService
{
    private:
        std::unordered_map<std::string, std::string> pasteMap;
        int pasteIdCounter;
        const std::string baseDomain;

    public:
        PasteService();
        std::string createPaste(const std::string& content);
        std::string getPaste(const std::string& pasteUrl);
};

#endif