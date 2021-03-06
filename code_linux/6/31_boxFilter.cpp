
//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版书本配套示例程序31
//		程序描述：方框滤波boxFilter函数的使用示例程序
//		开发测试所用操作系统： Windows 7 64bit
//		开发测试所用IDE版本：Visual Studio 2010
//		开发测试所用OpenCV版本：	3.0 beta
//		2014年11月 Created by @浅墨_毛星云
//		2014年12月 Revised by @浅墨_毛星云
//------------------------------------------------------------------------------------------------


//---------------------------------【头文件、命名空间包含部分】-------------------------------
//		描述：包含程序所使用的头文件和命名空间
//------------------------------------------------------------------------------------------------
#include "opencv2/core/core.hpp" 
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/imgproc/imgproc.hpp" 
using namespace cv; 

//-----------------------------------【main( )函数】--------------------------------------------
//	描述：控制台应用程序的入口函数，我们的程序从这里开始
//-----------------------------------------------------------------------------------------------
int main( )
{ 
	// 载入原图
	Mat image=imread("../6/31.jpg"); 

	//创建窗口
	namedWindow( "方框滤波【原图】" ); 
	namedWindow( "方框滤波【效果图】"); 

	//显示原图
	imshow( "方框滤波【原图】", image ); 

	//进行方框滤波操作
	Mat out; 
	boxFilter( image, out, -1,Size(5, 5)); 

	//显示效果图
	imshow( "方框滤波【效果图】" ,out ); 

	waitKey( 0 );     
} 