#ifndef FINDWORDSCONSTANTS_H
#define FINDWORDSCONSTANTS_H


#include <string>

using namespace std;


namespace fw
{
extern const unsigned int LanguagesNumber = 2;
extern const unsigned int MenuItemsNumber = 5;
extern const unsigned int AuxiliaryMenuItemsNumber = 3;


class MenuConstants
{
public:
    static string MenuItemsStrings[MenuItemsNumber][LanguagesNumber];
    static string AuxiliaryMenuItemsStrings[AuxiliaryMenuItemsNumber][LanguagesNumber];
};

string MenuConstants::MenuItemsStrings[MenuItemsNumber][LanguagesNumber] = {
    {"1. ������ ������� ����", "1. Enter letter table"},
    {"2. �������� ������������� ���������� ����������", "2. Change the need to find a combination"},
    {"3. �������� �������� ���� ����", "3. Change default length range of words"},
    {"4. ������� ������ ����-�������", "4. Select another dictionary file"}, {"5. �����", "5. Exit"}};
string MenuConstants::AuxiliaryMenuItemsStrings[AuxiliaryMenuItemsNumber][LanguagesNumber] = {{"����", "Menu"},
    {"�������� ����� ����: ", "Select menu item: "},
    {"��� ����������� ������� ����� �������...", "Press any key now to continue..."}};

extern const string PathToTheDictionaryString[LanguagesNumber] = {
    "������� ���� � �����-�������: ", "Enter the path to the dictionary file: "};
extern const string CalculationTimeMicrosecondsString[LanguagesNumber] = {
    "����� ������� (������������):                            ", "Calculation time (microseconds):                 "};
extern const string CalculationTimeMillisecondsString[LanguagesNumber] = {
    "����� ������� (������������):                            ", "Calculation time (milliseconds):                 "};
extern const string CalculationTimeSecondsString[LanguagesNumber] = {
    "����� ������� (�������):                                 ", "Calculation time (seconds):                      "};
extern const string VocabularyWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ����:                               ", "Number of vocabulary words:                      "};
extern const string PossibleWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ���� � �������:                     ", "Number of possible words in the table:           "};
extern const string MatchedWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ��������� � ��������� ����:         ", "Number of matched dictionary and possible words: "};
extern const string CombinedWordsSizeString[LanguagesNumber] = {
    "���������� ��������� ����, ������� ����� ��������������: ", "Number of matched words that can be combined:    "};
extern const string ColoredTablesString[LanguagesNumber] = {"������������ �������", "Colored tables"};
extern const string MatchedWordsString[LanguagesNumber] = {
    "������ ��������� ���� (��� ����������): ", "A list of matching words (without repetition): "};
extern const string CombinedWordsString[LanguagesNumber] = {
    "������ ��������� ����, ������� ����� �������������� (��� ����������): ",
    "List of matching words that can be combined (without repetition): "};
extern const string EnterLinesString[LanguagesNumber] = {"������� ���������� �����: ", "Enter the number of lines: "};
extern const string EnterColumnsString[LanguagesNumber] = {
    "������� ���������� ��������: ", "Enter the number of columns: "};
extern const string EnterLettersString[LanguagesNumber] = {
    "������� ����� (������ �������� ������� ��� �����)", "Enter letters (a space is a cell without a letter)"};
extern const string EnterMinLengthString[LanguagesNumber] = {
    "������� ����������� ����� �����: ", "Enter the minimum word length: "};
extern const string EnterMaxLengthString[LanguagesNumber] = {
    "������� ������������ ����� �����: ", "Enter the maximum word length: "};
extern const string EnabledStateString[LanguagesNumber] = {"��������", "enabled"};
extern const string DisabledStateString[LanguagesNumber] = {"���������", "disabled"};
extern const string MinimumString[LanguagesNumber] = {"�������: ", "minimum: "};
extern const string MaximumString[LanguagesNumber] = {";  ��������: ", ";  maximum: "};
extern const string VocabularySizeString[LanguagesNumber] = {"������ �������: ", "vocabulary size: "};


extern const unsigned int attributesLength = 15;
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
