#include<stdio.h>
typedef struct SinhVien{
    char masinhvien[100];
    char hoten[100];
    char ngaysinh[100];
    float diemtrungbinh;
};
void nhapSinhVien(SinhVien &sinhvien){
    printf("Nhap Ma Sinh Vien:");
    gets(sinhvien.masinhvien);
    printf("Nhap Ho Ten Sinh Vien: ");
    gets(sinhvien.hoten);
    printf("Nhap Ngay Sinh: ");
    gets(sinhvien.ngaysinh);
    printf("Nhap Diem Trung Binh:");
    scanf("%f",&sinhvien.diemtrungbinh);
    fflush(stdin);
}
void drawLine(){
    printf("-------------------------------------\n");
}
void xuatSinhVien(SinhVien sinhvien){
    drawLine();
    printf("MaSinhVien: %s\n",sinhvien.masinhvien);
    printf("Ho Ten: %s\n",sinhvien.hoten);
    printf("NgaySinh: %s\n",sinhvien.hoten);
    printf("DiemTrungBinh: %.2f\n",sinhvien.diemtrungbinh);
    drawLine();
}
int main(){
    SinhVien sinhvien;
    nhapSinhVien(sinhvien);
    xuatSinhVien(sinhvien);
    return 0;
}