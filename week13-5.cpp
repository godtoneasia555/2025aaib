///week13_5_sound
//�n���w�� sketh-Library-Manage Libraries
//��sound �U�� sound ����� �I Install �w�˪�
import processing.sound.*; //�ϥ��n�����~��
SoundFile mySound;///�ŧi�ܼ� mySound ���O SoundFile
void setup(){
  size(400, 400);
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void draw(){
}
