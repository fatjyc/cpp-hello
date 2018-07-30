#include <iostream>

class Translator {
    private:
        std::string language;

    public:
        Translator();
        Translator(std::string);
        std::string say();
};

Translator::Translator() {
    language = "english";
}

Translator::Translator(std::string lang) {
    language = lang;
}

std::string Translator::say() {
    if (!this->language.compare("chinese")) {
        return "你好，世界！";
    }
    if (!this->language.compare("janpanese")) {
        return "こんにちは世界!";
    }
    return "Hello, World!";
}
