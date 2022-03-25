public class HinhChuNhat {
    private double dai;
    private double rong;
    public HinhChuNhat(double dai,double rong){
        this.dai = dai;
        this.rong = rong;
    }

    public void setDai(double dai) {
        this.dai = dai;
    }

    public void setRong(double rong) {
        this.rong = rong;
    }

    public double getDai() {
        return dai;
    }

    public double getrong() {
        return rong;
    }

    public double tinhChuVi() {
        return 2*(dai + rong);
    }
    
    public double tinhDienTich() {
        return dai * rong;
    }
}