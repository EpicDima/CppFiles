#ifndef FINDWORDSCONSTANTS_H
#define FINDWORDSCONSTANTS_H


#include <string>


namespace fw
{
extern const uint64_t LanguagesNumber = 2;
extern const uint64_t MenuItemsNumber = 5;
extern const uint64_t AuxiliaryMenuItemsNumber = 3;


struct MenuConstants
{
    static std::string MenuItemsStrings[MenuItemsNumber][LanguagesNumber];
    static std::string AuxiliaryMenuItemsStrings[AuxiliaryMenuItemsNumber][LanguagesNumber];
};

std::string MenuConstants::MenuItemsStrings[MenuItemsNumber][LanguagesNumber] = {
    {"1. ������ ������� ����", "1. Enter letter table"},
    {"2. �������� ������������� ���������� ����������", "2. Change the need to find a combination"},
    {"3. �������� �������� ���� ����", "3. Change default length range of words"},
    {"4. ������� ������ ����-�������", "4. Select another dictionary file"}, {"5. �����", "5. Exit"}};
std::string MenuConstants::AuxiliaryMenuItemsStrings[AuxiliaryMenuItemsNumber][LanguagesNumber] = {{"����", "Menu"},
    {"�������� ����� ����: ", "Select menu item: "},
    {"��� ����������� ������� ����� �������...", "Press any key now to continue..."}};

extern const std::string PathToTheDictionaryString[LanguagesNumber] = {
    "������� ���� � �����-�������: ", "Enter the path to the dictionary file: "};
extern const std::string CalculationTimeMicrosecondsString[LanguagesNumber] = {
    "����� ������� (������������):                            ", "Calculation time (microseconds):                 "};
extern const std::string CalculationTimeMillisecondsString[LanguagesNumber] = {
    "����� ������� (������������):                            ", "Calculation time (milliseconds):                 "};
extern const std::string CalculationTimeSecondsString[LanguagesNumber] = {
    "����� ������� (�������):                                 ", "Calculation time (seconds):                      "};
extern const std::string VocabularyWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ����:                               ", "Number of vocabulary words:                      "};
extern const std::string PossibleWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ���� � �������:                     ", "Number of possible words in the table:           "};
extern const std::string MatchedWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ��������� � ��������� ����:         ", "Number of matched dictionary and possible words: "};
extern const std::string CombinedWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ����, ������� ����� ��������������: ", "Number of matched words that can be combined:    "};
extern const std::string ColoredTablesString[LanguagesNumber] = {"������������ �������", "Colored tables"};
extern const std::string MatchedWordsString[LanguagesNumber] = {
    "������ ��������� ���� (��� ����������): ", "A list of matching words (without repetition): "};
extern const std::string CombinedWordsString[LanguagesNumber] = {
    "������ ��������� ����, ������� ����� �������������� (��� ����������): ",
    "List of matching words that can be combined (without repetition): "};
extern const std::string EnterLinesString[LanguagesNumber] = {"������� ���������� �����: ", "Enter the number of lines: "};
extern const std::string EnterColumnsString[LanguagesNumber] = {
    "������� ���������� ��������: ", "Enter the number of columns: "};
extern const std::string EnterLettersString[LanguagesNumber] = {
    "������� ����� (������ �������� ������� ��� �����)", "Enter letters (a space is a cell without a letter)"};
extern const std::string EnterMinLengthString[LanguagesNumber] = {
    "������� ����������� ����� �����: ", "Enter the minimum word length: "};
extern const std::string EnterMaxLengthString[LanguagesNumber] = {
    "������� ������������ ����� �����: ", "Enter the maximum word length: "};
extern const std::string EnabledStateString[LanguagesNumber] = {"��������", "enabled"};
extern const std::string DisabledStateString[LanguagesNumber] = {"���������", "disabled"};
extern const std::string MinimumString[LanguagesNumber] = {"�������: ", "minimum: "};
extern const std::string MaximumString[LanguagesNumber] = {"; ��������: ", "; maximum: "};
extern const std::string VocabularySizeString[LanguagesNumber] = {"������ �������: ", "vocabulary size: "};


extern const uint64_t attributesLength = 15;
extern const WORD attributesBackground[attributesLength] = {BACKGROUND_RED, BACKGROUND_GREEN, BACKGROUND_BLUE,
    BACKGROUND_INTENSITY, BACKGROUND_RED | BACKGROUND_GREEN, BACKGROUND_RED | BACKGROUND_BLUE,
    BACKGROUND_RED | BACKGROUND_INTENSITY, BACKGROUND_GREEN | BACKGROUND_BLUE, BACKGROUND_GREEN | BACKGROUND_INTENSITY,
    BACKGROUND_BLUE | BACKGROUND_INTENSITY, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
    BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY, BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
    BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
    BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY};


extern const WORD attributesForeground[attributesLength] = {FOREGROUND_RED, FOREGROUND_GREEN, FOREGROUND_BLUE,
    FOREGROUND_INTENSITY, FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_RED | FOREGROUND_BLUE,
    FOREGROUND_RED | FOREGROUND_INTENSITY, FOREGROUND_GREEN | FOREGROUND_BLUE, FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    FOREGROUND_BLUE | FOREGROUND_INTENSITY, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
    FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY};

}   // namespace fw

#endif