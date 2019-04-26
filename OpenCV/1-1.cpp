//#include<iostream>
//#include<opencv2/opencv.hpp>
//#include<string>
//using namespace std;
//using namespace cv;
//
//int main() {
//	string srcImgName = "bupt.jpg";
//	//bupt.jpg是图片路径，可以读入，也可以最开始赋值。
//	//为了方便，没有从main函数的argv获取。
//	//main函数可以带两个参数：
//	//argc:int型，记录输入个数
//	//argv：vector，存储输入	
//	string dstImgName = "bupt_dst.jpg";//存储图片路径
//
//	Mat srcImage;//Mat是个矩阵数据结构，用于存储读入图片；
//	srcImage = imread(srcImgName, IMREAD_UNCHANGED);
//	//读入图片，有两个参数
//	//srcImgName：图片路径
//	//第二个参数主要三种：
//	//IMREAD_UNCHANGED:
//	//IMREAD_GRAYSCALE:
//	//IMREAD_COLOR:
//
//	imshow("windowName", srcImage);
//	//windowName是窗口名，默认以自适应模式显示（即按图片大小显示）
//	//可以自己定义窗口，修改显示窗口模式
//
//	Mat dstImage;//用于存储保存图片
//
//	//对原图做灰度处理
//	cvtColor(srcImage, dstImage, COLOR_BGR2GRAY);
//	//cvtcolor有三个参数：
//	//srcImage：原图
//	//dstImage：修改后的图
//	//颜色修改方式
//
//	imwrite(dstImgName, dstImage);
//	imshow("dst", dstImage);
//
//	waitKey(0);
//	//等待，参数是时间
//	//0：代表一直等待到有按键
//	//n：代表等待n ms或者等待到按键
//
//	return 0;
//}