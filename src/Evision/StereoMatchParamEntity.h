#pragma once

#include <QObject>
#include <opencv.hpp>

class StereoMatchParamEntity : public QObject
{
	Q_OBJECT

public:
	static StereoMatchParamEntity* getInstance();
	~StereoMatchParamEntity();
private:
	StereoMatchParamEntity(QObject *parent = 0);
private:
#pragma region params
	int Uniradio = 0;//
	int Prefilcap = 0;//
	int Specwinsz = 0;//
	int SadWinsz = 0;//
	int MinDisp = 0;//
	int TextThread = 0;//
	int NumDisparities = 0;// numDisparities	
	int Specrange = 0;//	
	int Maxdifdisp12 = 0;//	

	bool BM = false;
	bool SGBM = false;

	bool MODE_HH = false;
	bool MODE_SGBM = false;
	bool MODE_3WAY = false;

	cv::Mat imgDtoShow;//在中心显示的大图
	cv::Mat iconImgL, iconImgR, iconRawDisp, iconFixDisp, iconPointDisp, iconPointImgL;//缩略图


	cv::Mat disparity;
	cv::Mat xyz;
	cv::Mat Q;
#pragma endregion

signals:
#pragma region param_Changed_signals
	void paramChanged_Uniradio();
	void paramChanged_Prefilcap();
	void paramChanged_Specwinsz();
	void paramChanged_SadWinsz();
	void paramChanged_MinDisp();
	void paramChanged_TextThread();
	void paramChanged_NumDisparities();
	void paramChanged_Specrange();
	void paramChanged_Maxdifdisp12();
	void paramChanged_BM();
	void paramChanged_SGBM();
	void paramChanged_MODE_HH();
	void paramChanged_MODE_SGBM();
	void paramChanged_MODE_3WAY();
	void paramChanged_ImageDtoShow();

	void paramChanged_IconImgL();
	void paramChanged_IconImgR();
	void paramChanged_IconRawDisp();
	void paramChanged_IconFixDisp();
	void paramChanged_IconPointDisp();
	void paramChanged_IconPointImgL();

#pragma endregion

public:
#pragma region getter And setter
	int getUniradio();
	void setUniradio(int value);

	int getPrefilcap();
	void setPrefilcap(int value);

	int getSpecwinsz();
	void setSpecwinsz(int value);

	int getSadWinsz();
	void setSadWinsz(int value);

	int getMinDisp();
	void setMinDisp(int value);

	int getTextThread();
	void setTextThread(int value);

	int getNumDisparities();
	void setNumDisparities(int value);

	int getSpecrange();
	void setSpecrange(int value);

	int getMaxdifdisp12();
	void setMaxdifdisp12(int value);

	bool getBM();
	void setBM(bool value);

	bool getSGBM();
	void setSGBM(bool value);

	bool getMODE_HH();
	void setMODE_HH(bool value);

	bool getMODE_SGBM();
	void setMODE_SGBM(bool value);

	bool getMODE_3WAY();
	void setMODE_3WAY(bool value);

	cv::Mat getImageDtoShow();
	void setImageDtoShow(cv::Mat value);

	cv::Mat getDisparity();
	void setDisparity(cv::Mat value);

	cv::Mat getXYZ();
	void setXYZ(cv::Mat value);

	cv::Mat getQ();
	void setQ(cv::Mat value);

	cv::Mat getIconImgL();
	void setIconImgL(cv::Mat value);

	cv::Mat getIconImgR();
	void setIconImgR(cv::Mat value);

	cv::Mat getIconRawDisp();
	void setIconRawDisp(cv::Mat value);

	cv::Mat getIconFixDisp();
	void setIconFixDisp(cv::Mat value);

	cv::Mat getIconPointDisp();
	void setIconPointDisp(cv::Mat value);

	cv::Mat getIconPointImgL();
	void setIconPointImgL(cv::Mat value);
#pragma endregion
};
