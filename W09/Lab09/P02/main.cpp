#include"GiangVien.h"
#include"NhanSu.h"
#include"ChuyenVien.h"
#include"TroGiang.h"
#include"NghienCuuVien.h"
#include"PhongQuanLy.h"
#include"ThucTapSinh.h"
PhongQuanLy* PhongQuanLy::phongquanly = NULL;
vector<NhanSu*> PhongQuanLy::list_NhanSu;

int main()
{
	PhongQuanLy *s= PhongQuanLy::GetInstance();
	s->input_list_NhanSu();
	// Khong tao dc mot doi tuong moi :DDDDD
	/*PhongQuanLy* s1 = PhongQuanLy::GetInstance();
	s1->input_list_NhanSu();*/
	s->DeleteInstance();
	return 0;
}