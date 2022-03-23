class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height

      void setlength(double l);
      void setheight(double h);
      void setwidth(double w);

       // write prototypes of getters for length, width and height

      int getlength();
      int getheight();
      int getwidth();

       int calcVolume();
};
