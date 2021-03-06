#pragma once

#include <QWidget>
#include "ui_MatcherView.h"
#include "StereoMatch.h"
#include "StereoMatchParamEntity.h"
#include "StereoMatchController.h"

class MatcherView : public QWidget
{
	Q_OBJECT

public:
	MatcherView(QWidget *parent = Q_NULLPTR);
	~MatcherView();

private:
	Ui::MatcherView ui;
	StereoMatchParamEntity * m_entity;
	StereoMatchController * m_controller;
public slots:
	void setDefaultMatchParam();
	void doMatch();
	void RefreshStereoMatch();

	//匹配参数
	void valueChanged_MinDisp(int value);
	void onParamChanged_MinDisp();

	void valueChanged_uniradio(int value);
	void onParamChanged_uniradio();

	void valueChanged_specwinsz(int value);
	void onParamChanged_specwinsz();

	void valueChanged_NumDisparities(int value);
	void onParamChanged_NumDisparities();
	void onReleased_NumDisparities();//约束:被16 整除

	void valueChanged_Specrange(int value);
	void onParamChanged_Specrange();

	void valueChanged_Prefilcap(int value);
	void onParamChanged_Prefilcap();

	void valueChanged_SadWinSize(int value);
	void onParamChanged_SadWinSize();
	void onReleased_SadWinSize();//约束:奇数

	void valueChanged_TextThread(int value);
	void onParamChanged_TextThread();

	void valueChanged_MaxDifdisp2(int value);
	void onParamChanged_MaxDifdisp2();

	//匹配算法
	void onClicked_BM(bool value);
	void onParamChanged_BM();

	void onClicked_SGBM(bool value);
	void onParamChanged_SGBM();
	//SGBM_MODE
	void onClicked_MODE_HH(bool value);
	void onParamChanged_MODE_HH();

	void onClicked_MODE_SGBM(bool value);
	void onParamChanged_MODE_SGBM();

	void onClicked_MODE_3WAY(bool value);
	void onParamChanged_MODE_3WAY();

	void onParamChanged_imgDtoShow();

	void onParamChanged_IconImgL();
	void onParamChanged_IconImgR();
	void onParamChanged_IconRawDisp();
	void onParamChanged_IconFixDisp();
	void onParamChanged_IconPointDisp();
	void onParamChanged_IconPointImgL();
};
