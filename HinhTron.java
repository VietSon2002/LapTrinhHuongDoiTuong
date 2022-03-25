public class HinhTron {
    private double BanKinh;
    public HinhTron(double BanKinh){
        this.BanKinh = BanKinh;
    }

    public void setBanKinh(double BanKinh) {
        this.BanKinh = BanKinh;
    }

    public double getBanKinh() {
        return BanKinh;
    }

    public double tinhChuVi() {
        return 2*BanKinh*3.14;
    }

    public double tinhDienTich() {
        return BanKinh*3.14;
    }
}