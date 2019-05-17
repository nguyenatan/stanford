#include <iostream>
#include <iomanip>

using namespace std;

struct thi_sinh
{
    int soBaoDanh;
    string hoTen;
    int namSinh;
    float toan, ly, hoa;
    float diemTrungBinh;
    struct thi_sinh *next;
};

// 1.
struct thi_sinh* input()
{
    struct thi_sinh *node = new struct thi_sinh;

    cout << "Nhap so bao danh: ";
    cin >> node->soBaoDanh;

    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, node->hoTen);

    cout << "Nhap nam sinh: ";
    cin >> node->namSinh;

    cout << "Nhap diem toan, ly, hoa: ";
    cin >> node->toan >> node->ly >> node->hoa;

    node->next = NULL;

    return node;
}

void insert(struct thi_sinh **head)
{
    struct thi_sinh *node = input();

    while(*head)
        head = &(*head)->next;

    *head = node;
}

void display(struct thi_sinh *head)
{
    if (!head) {
        cout << "NULL\n";
        return;
    }
    
    size_t i = 1;
    while (head) {
        cout << setfill('0') << setw(2) << i++ << ". ";
        cout << "So bao danh: " << head->soBaoDanh;
        cout << "\n    Ho ten     : " << head->hoTen;
        cout << "\n    Nam sinh   : " << head->namSinh;
        cout << "\n    Diem toan  : " << head->toan;
        cout << "\n    Diem ly    : " << head->ly;
        cout << "\n    Diem hoa   : " << head->hoa;
        cout << '\n';

        head = head->next;
    }
}

// 2.
float diemTrungBinh(struct thi_sinh *thiSinh)
{
    return (thiSinh->toan + thiSinh->ly + thiSinh->hoa) / 3;
}

bool isDiemLiet(struct thi_sinh *thiSinh)
{
    return (thiSinh->toan < 2 || thiSinh->ly < 2 || thiSinh->hoa < 2);
}

int main()
{
    size_t size;
    cout << "Nhap so luong thi sinh: ";
    cin >> size;

    struct thi_sinh *head = input();

    // 1. Nhap thong tin thi sinh.
    size_t i = 1;
    while (i++ < size)
        insert(&head);

    display(head);

    // 2. Lay ra top 5 thi sinh co diem cao nhat, khong co diem liet.
    struct thi_sinh *top5[5];
    top5[0]->diemTrungBinh = -1;
    top5[1]->diemTrungBinh = -1;
    top5[2]->diemTrungBinh = -1;
    top5[3]->diemTrungBinh = -1;
    top5[4]->diemTrungBinh = -1;

    while (head) {

        if (!isDiemLiet(head)) {

            if (diemTrungBinh(head) > top5[0]->diemTrungBinh) {
                top5[4] = top5[3];
                top5[3] = top5[2];
                top5[2] = top5[1];
                top5[1] = top5[0];
                top5[0] = head;

            } else if (diemTrungBinh(head) > top5[1]->diemTrungBinh) {
                top5[4] = top5[3];
                top5[3] = top5[2];
                top5[2] = top5[1];
                top5[1] = head;

            } else if (diemTrungBinh(head) > top5[2]->diemTrungBinh) {
                top5[4] = top5[3];
                top5[3] = top5[2];
                top5[2] = head;

            } else if (diemTrungBinh(head) > top5[3]->diemTrungBinh) {
                top5[4] = top5[3];
                top5[3] = head;

            } else if (diemTrungBinh(head) > top5[4]->diemTrungBinh)
                top5[4] = head;
        }

        head = head->next;
    }

    struct thi_sinh *infoTop5 = new struct thi_sinh[5];

    for (size_t i = 0; i < 5; ++i)
        if(top5[i]->diemTrungBinh != -1) {
            infoTop5 = top5[i];
            infoTop5 = infoTop5->next;

            if (i == 4)
                infoTop5->next = NULL;
        }

    display(infoTop5);

    return 0;
}
