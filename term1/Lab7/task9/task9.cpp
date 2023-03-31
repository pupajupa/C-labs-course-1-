#include <iostream> 
#include <string> 

int intCheck(int min, int max);
void printInfo();
bool repeat();
std::string functionCore(int n);
std::string threeInsert(std::string threeSystems);
std::string binaryCode(std::string *s1);
std::string firstDay(std::string* s1, std::string med, std::string threeSystems);
std::string secondDay(std::string* s1, std::string med, std::string threeSystems);
int slave(int lastSlave, std::string med);

int main()
{
    do
    {
        setlocale(LC_ALL, "Russian");
        printInfo();
        std::string threeSystems;
        std::string s1[241];
        std::string med = "00000";
        int lastSlave = 0;
        std::cout << "   Enter the poisoned barrel:" << '\n';

        int num = intCheck(1, 240);
        threeSystems = functionCore(num);
        threeSystems = threeInsert(threeSystems);
        binaryCode(s1);
        med = firstDay(s1, med, threeSystems);
        med = secondDay(s1, med, threeSystems);
        std::cout << med << std::endl;
        int MED = std::stoi(med);
        std::cout << "\n   A barrel of poison obtained by calculations : " << '\n';
        std::cout << slave(lastSlave,med);
    } while (repeat());
}

int intCheck(int min, int max)
{
    int x;
    setlocale(LC_ALL, "rus");
    while (scanf_s("%d", &x) != 1 || x < min || x > max || getchar() != '\n')    //�������� �� ���� ��� ����� � ����� ����
    {
        printf("Error. Pleasy, try again.\n");
        rewind(stdin);
    }
    return x;
}

void printInfo()
{
    std::cout << "��������� ������ ����������, ������ 253505" << std::endl;
    std::cout << "������� 4" << '\n';
    std::cout << "���� 240 �����. ������������ ������ ����� ����������� �����. " << std::endl;
    std::cout << "��������� ������ � ������� ������ ��������� ��������� ��� �����." << std::endl << std::endl;
    printf("��������:\n��� ���������� ������ � ��������  ������� ���������. �������� ����� 1,2,3,4,5. � ������ ���� ������ N-� ��� ���� �� ����� ��� N-� ������ = 1\n");
    printf("���� ��� �������, �� �� ������(XXXXX) ����������� ���� ������������  Xn = 1 ���� N - � ��� ����.� �.�.(�������� ������ 2 ���� ������ � ��������� : 1XXX1)");
    printf("\n������ ������� ����������� �������� �� �����, ��� ��� ������ ��������� � 2�");
    printf("\n��������� ������� XXXXX; Xn = 2 ���� N ��� ���� ��� 0 ���� ���, ��� ������ ����� ����������� ����� 0, 1 ��� 2");
    printf("\n����� ������� ��� ���������� ����� � �������� ����������� � ���������� �������.�������� �����(������ �����)\n\n");
}

bool repeat()
{
    std::cout << "\n\n   �ontinue ?\n" << "1 - YES\t0 - NO\n";
    int q = intCheck(0,1);
    if (q == 1)
    {
        system("cls");
        return true;
    }
}

std::string functionCore(int n)
{
    std::string s = "";
    while (n >= 3) {
        s.push_back((n % 3) + 48);
        n /= 3;
    }
    s.push_back(n + 48);
    reverse(s.begin(), s.end());

    return s;
}

std::string threeInsert(std::string threeSystems)
{
    if (threeSystems.size() == 1) {
        threeSystems = threeSystems.insert(0, "0000");
    }
    if (threeSystems.size() == 2) {
        threeSystems = threeSystems.insert(0, "000");
    }
    if (threeSystems.size() == 3) {
        threeSystems = threeSystems.insert(0, "00");
    }
    if (threeSystems.size() == 4) {
        threeSystems = threeSystems.insert(0, "0");
    }
    return threeSystems;
}

std::string binaryCode(std::string *s1)
{
    for (int i = 1; i < 81; i++)
    {
        if (functionCore(i).size() == 1) {
            s1[i] = functionCore(i).insert(0, "0000");
        }
        if (functionCore(i).size() == 2) {
            s1[i] = functionCore(i).insert(0, "000");
        }
        if (functionCore(i).size() == 3) {
            s1[i] = functionCore(i).insert(0, "00");
        }
        if (functionCore(i).size() == 4) {
            s1[i] = functionCore(i).insert(0, "0");
        }
    }
    for (int i = 81; i < 241; i++)
    {
        s1[i] = functionCore(i);
    }
    return *s1;
}

std::string firstDay(std::string* s1, std::string med, std::string threeSystems)
{
    for (int i = 0; i < 241; i++) {

        if (s1[i].find("1", 0) == 0 && s1[i] == threeSystems) {
            med.erase(0, 1);
            med.insert(0, "1");
            std::cout << "On the first day the fifth slave died." << '\n';
        }

        if (s1[i].find("1", 1) == 1 && s1[i] == threeSystems) {      //������ ��� ��������� ���� ������. ���� ����, �� ���������� ��� � �����.
            med.erase(1, 1);
            med.insert(1, "1");
            std::cout << "On the first day the fourth slave died." << '\n';
        }

        if (s1[i].find("1", 2) == 2 && s1[i] == threeSystems) {
            med.erase(2, 1);
            med.insert(2, "1");
            std::cout << "On the first day the third slave died." << '\n';
        }

        if (s1[i].find("1", 3) == 3 && s1[i] == threeSystems) {
            med.erase(3, 1);
            med.insert(3, "1");
            std::cout << "On the first day the second slave died." << '\n';
        }

        if (s1[i].find("1", 4) == 4 && s1[i] == threeSystems) {
            med.erase(4, 1);
            med.insert(4, "1");
            std::cout << "On the first day the first slave died." << '\n';
        }
    }
    return med;
}

std::string secondDay(std::string* s1, std::string med, std::string threeSystems)
{
    for (int i = 0; i < 241; i++) {

        if (s1[i].find("2", 0) == 0 && s1[i] == threeSystems) {
            med.erase(0, 1);
            med.insert(0, "2");
            std::cout << "On the second day the fifth slave died" << '\n';
        }

        if (s1[i].find("2", 1) == 1 && s1[i] == threeSystems) {
            med.erase(1, 1);
            med.insert(1, "2");
            std::cout << "On the second day the fourth slave died." << '\n';
        }

        if (s1[i].find("2", 2) == 2 && s1[i] == threeSystems) {        //�� �� �����, ������ ������ ����
            med.erase(2, 1);
            med.insert(2, "2");
            std::cout << "On the second day the third slave died." << '\n';
        }

        if (s1[i].find("2", 3) == 3 && s1[i] == threeSystems) {
            med.erase(3, 1);
            med.insert(3, "2");
            std::cout << "On the second day the second slave died" << '\n';
        }

        if (s1[i].find("2", 4) == 4 && s1[i] == threeSystems) {
            med.erase(4, 1);
            med.insert(4, "2");
            std::cout << "On the second day the first slave died." << '\n';
        }
    }
    return med;
}

int slave(int lastSlave,std::string med)
{
    if (med[0] == '2') {
        lastSlave += 2 * 81;
    }
    else if (med[0] == '1') {
        lastSlave += 81;
    }
    if (med[1] == '2') {
        lastSlave += 2 * 27;
    }
    else if (med[1] == '1') {
        lastSlave += 27;
    }
    if (med[2] == '2') {
        lastSlave += 2 * 9;
    }
    else if (med[2] == '1') {
        lastSlave += 9;
    }
    if (med[3] == '2') {
        lastSlave += 2 * 3;
    }
    else if (med[3] == '1') {
        lastSlave += 3;
    }
    if (med[4] == '2') {
        lastSlave += 2 * 1;
    }
    else if (med[4] == '1') {
        lastSlave += 1;
    }
    return lastSlave;
}