#pragma once
#include <string>

class url {
    private:
    std::string scheme;
    std::string authority;
    std::string path;

    public:
    url(std::string URL){
        int indexOfEndScheme = URL.find(":");
        scheme = URL.substr(0, indexOfEndScheme+1);
        std::string URLAfterScheme = URL.substr(indexOfEndScheme+1, URL.size());
        std::string URLWWWStart = URL.substr(indexOfEndScheme+3, URL.size());
        int indexOfEndAuthority = URLWWWStart.find("/");
        authority = URLAfterScheme.substr(0, indexOfEndAuthority+2);
        path = URLAfterScheme.substr(indexOfEndAuthority+2, URLAfterScheme.size());

    }
    std::string getScheme(){
        return scheme;
    }
    std::string getAuthority(){
        return authority;
    }
    std::string getPath(){
        return path;
    }
    std::string getFullURL(){
        return scheme + authority + path;
    }


};