#ifndef __QMDI_TAB_WIDGET_H__
#define __QMDI_TAB_WIDGET_H__

#include <QTabWidget>
#include "qmdiserver.h"
class QWidget;
class qmdiHost;

class qmdiTabWidget : public QTabWidget, public qmdiServer
{
	Q_OBJECT
public:
	qmdiTabWidget( QWidget *parent=NULL );

public slots:
	void tabChanged( int i );
	void clientDeleted( QObject *o );

protected:
	void tabInserted ( int index );
	void tabRemoved ( int index );
	
private:
	QWidget *activeWidget;
	qmdiHost *mdiHost;
};

#endif // __QMDI_TAB_WIDGET_H__
