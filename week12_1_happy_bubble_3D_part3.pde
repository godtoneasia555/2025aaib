//week12_1_happy_bubble_3D_part3
//用mousePressed按下去,要對陣列宣告
void setup(){
    size(300,300,P3D);
}
int [][] state = new int[6][6]; // state狀況; 0沒按1按下
void draw(){
  background(255,255,0);
  ortho();
  lights();
  noStroke();
  fill(#FF8BEA);
  
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
       pushMatrix();
       translate(25+j*50,25+i*50);
       sphere(23);//半徑變小了
       popMatrix();
     }
   }
 }
  void mousePressed(){
   int j = (mouseX)/50, i =(mouseY)/50;
   state[i][j] = 1 - state[i][j];
 }
