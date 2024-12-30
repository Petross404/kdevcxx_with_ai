// <one line to give the program's name and a brief idea of what it does.>
// SPDX-FileCopyrightText: 2024 Πέτρος Σιλιγκούνας <petross404@gmail.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "aiwidget.h"

AIWidget::AIWidget(QWidget * parent, KTextEditor::Document * document, Qt::WindowFlags f) :
    QWidget{parent, f},
    m_ui{std::make_unique<Ui::AIWidget>()},
    m_doc{document},
    m_view{document->createView(this)}
  {
  installEventFilter(this);

  m_ui->setupUi(this);
  m_ui->verticalLayout->addWidget(m_view);
  }

bool AIWidget::eventFilter(QObject * watched, QEvent * event) { return QWidget::eventFilter(watched, event); }

// bool AIWidget::event( QEvent* event )
// {
// }
//
// void AIWidget::mousePressEvent( QMouseEvent* event )
// {
// }
//
// void AIWidget::mouseReleaseEvent( QMouseEvent* event )
// {
// }
//
// void AIWidget::mouseDoubleClickEvent( QMouseEvent* event )
// {
// }
//
// void AIWidget::mouseMoveEvent( QMouseEvent* event )
// {
// }
//
// void AIWidget::wheelEvent( QWheelEvent* event )
// {
// }
//
// void AIWidget::keyReleaseEvent( QKeyEvent* event )
// {
// }
//
// void AIWidget::focusInEvent( QFocusEvent* event )
// {
// }
//
// void AIWidget::focusOutEvent( QFocusEvent* event )
// {
// }
//
// void AIWidget::enterEvent( QEvent* event )
// {
// }
//
// void AIWidget::leaveEvent( QEvent* event )
// {
// }
//
// void AIWidget::paintEvent( QPaintEvent* event )
// {
// }
//
// void AIWidget::closeEvent( QCloseEvent* event )
// {
// }
//
// void AIWidget::contextMenuEvent( QContextMenuEvent* event )
// {
// }
//
// void AIWidget::showEvent( QShowEvent* event )
// {
// }
