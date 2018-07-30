#include "translator.cpp"

std::string hello(std::string language) {
    Translator translator(language);
    return translator.say();
}
