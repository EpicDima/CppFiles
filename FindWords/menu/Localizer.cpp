#include "Localizer.h"


uint64_t Localizer::LOCALES = 2;


Localizer::Localizer(Locale locale) : locale(locale)
{
    changeLocale(locale);
}


Localizer::Locale Localizer::getLocale()
{
    return locale;
}



void Localizer::changeLocale(Locale loc)
{
    this->locale = loc;
    map.clear();
    std::string filepath = getLocaleFilePath();
    parseFile(filepath);
}


std::string Localizer::get(const std::string& key)
{
    return map[key];
}


std::string Localizer::getLocaleFilePath()
{
    std::string localeString;
    switch (locale) {
        case Locale::EN:
            localeString = "en";
            break;
        case Locale::RU: // так и должно быть, в непонятном случае будет по стандарту русская локализация
        default:
            localeString = "ru";
            break;
    }
    return "locale/locale." + localeString + ".txt";
}


void Localizer::parseFile(const std::string& filepath)
{
    std::ifstream file(filepath);
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::size_t index = line.find_first_of('=');
            if (index != std::string::npos) {
                std::string key = line.substr(0, index);
                std::string value = line.substr(index + 1, std::string::npos);
                map[key] = value;
            }
        }
    }
    file.close();
}