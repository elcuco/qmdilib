#ifndef __MAIN_WIN_H__
#define __MAIN_WIN_H__

/**
 * \file mainwindow6.h
 * \brief Implementation of the main window class of the 2nd demo
 * \author Diego Iastrubni (elcuco@kde.org)
 * License LGPL
 * \see MainWindow
 */

#include <QMainWindow>
#include "qmdihost.h"
#include "qmdiclient.h"
#include "qmditabwidget.h"
#include "qmdiworkspace.h"


class qmdiTabWidget;
class qmdiWorkspace;
class QToolButton;

class MainWindow6: public QMainWindow, public qmdiHost
{
Q_OBJECT
public:
	MainWindow6( QWidget *owner=NULL );

public slots:
	void init_actions();
	void init_gui();
	void about();
	void fileNew();
	void fileClose();
	void helpQtTopics();
	
private:
	QAction *actionQuit;
	QAction *actionFileNew;
	QAction *actionQtTopics;
	QAction *actionAbout;
	//qmdiTabWidget  *tabWidget;
	qmdiWorkspace  *tabWidget;

	QToolButton *tabCloseBtn;
	QToolButton *tabNewBtn;
};

#endif // __MAIN_WIN_H__