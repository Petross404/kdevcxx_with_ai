// <one line to give the program's name and a brief idea of what it does.>
// SPDX-FileCopyrightText: 2024 Πέτρος Σιλιγκούνας <petross404@gmail.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef AIWIDGET_H
#define AIWIDGET_H

#include <qwidget.h>
#include <memory>

#include <KTextEditor/View>

#include "ui_aiwidget.h"

/*!
 * \class AIWidget
 * \brief This widget provides an interface for AI-assisted code suggestions.
 *
 * The AIWidget is designed to overlay on top of a KTextEditor::Document to allow
 * users to review and apply AI-generated code proposals. It integrates seamlessly
 * with KDevelop and uses Qt's event filtering mechanism for interaction.
 */
class AIWidget : public QWidget
{
        Q_OBJECT
        Q_DISABLE_COPY_MOVE(AIWidget)

public:
        /*!
         * \brief Constructs the AIWidget.
         *
         * \param parent The parent widget for this AIWidget.
         * \param document The KTextEditor::Document associated with this widget.
         * \param f Window flags for customizing the widget's behavior and appearance.
         */
        AIWidget ( QWidget* parent, KTextEditor::Document* document, Qt::WindowFlags f );

        /*!
         * \brief Event filter for handling widget-specific events.
         *
         * This function intercepts events to provide custom behavior, such as positioning
         * the widget or handling user interactions.
         *
         * \param watched The object whose events are being monitored.
         * \param event The event to be processed.
         * \return Returns true if the event is handled by this widget; otherwise, false.
         */
        bool eventFilter ( QObject* watched, QEvent* event ) override;

protected:
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // bool event ( QEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void mousePressEvent ( QMouseEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void mouseReleaseEvent ( QMouseEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void mouseDoubleClickEvent ( QMouseEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void mouseMoveEvent ( QMouseEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void wheelEvent ( QWheelEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void keyReleaseEvent ( QKeyEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void focusInEvent ( QFocusEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void focusOutEvent ( QFocusEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void enterEvent ( QEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void leaveEvent ( QEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void paintEvent ( QPaintEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void closeEvent ( QCloseEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void contextMenuEvent ( QContextMenuEvent* event ) override;
        //
        // /**
        //  * @todo write docs
        //  *
        //  * @param event TODO
        //  * @return TODO
        //  */
        // void showEvent ( QShowEvent* event ) override;

private:
        std::unique_ptr<Ui::AIWidget> m_ui;
        KTextEditor::Document* m_doc;
        KTextEditor::View* m_view;
};

#endif // AIWIDGET_H
