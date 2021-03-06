#ifndef __MAIN_WIN_H__
#define __MAIN_WIN_H__

/**
 * \file mainwindow3.h
 * \brief Declaration of the main window class of the 3rd demo
 * \author Diego Iastrubni (diegoiast@gmail.com)
 * License GPL 2 or 3
 * \see MainWindow3
 */
 
// $Id$ 

//#include <QMainWindow>
#include "qmdihost.h"
#include "qmdiclient.h"
#include "qmditabwidget.h"
#include "qmdimainwindow.h"


class QTabWidget;
class QToolButton;
class QWorkspace;

//class MainWindow3: public QMainWindow, public qmdiHost
class MainWindow3: public qmdiMainWindow
{
Q_OBJECT
public:
	MainWindow3( QWidget *owner=NULL );

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
	QTabWidget *tabWidget;
	QWorkspace  *workspace;

	QToolButton *tabCloseBtn;
	QToolButton *tabNewBtn;
};

#endif // __MAIN_WIN_H__
