//week12_1_happy_bubble_3D_part1
void setup(){
    size(300,300,P3D);//開啟3D功能
}
void draw(){
  background(255);
  
  pushMatrix();
  translate(mouseX,mouseY);
  sphere(60);//半徑60的圓球
  popMatrix();
}
