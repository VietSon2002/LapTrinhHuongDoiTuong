public class SuDungHinhVe {
    public static void main(String[] args) {
        HinhTron r = new HinhTron(12);
        System.out.println("Chu vi hinh tron la: "+r.tinhChuVi());
        System.out.println("Dien tich hinh tron la: "+r.tinhDienTich());
        HinhChuNhat cn = new HinhChuNhat(12, 5);
        System.out.println("Chu vi hinh chu nhat la: "+cn.tinhChuVi());
        System.out.println("Dien tich hinh tron la: "+cn.tinhDienTich());
    }
    
}