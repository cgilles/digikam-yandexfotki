/* ============================================================
 *
 * This file is a part of digiKam project
 * https://www.digikam.org
 *
 * Date        : 2011-02-19
 * Description : a tool to export items to YandexFotki web service
 *
 * Copyright (C) 2011      by Roman Tsisyk <roman at tsisyk dot com>
 * Copyright (C) 2011-2022 by Gilles Caulier <caulier dot gilles at gmail dot com>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation;
 * either version 2, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * ============================================================ */

#ifndef DIGIKAM_YF_NEW_ALBUM_DLG_H
#define DIGIKAM_YF_NEW_ALBUM_DLG_H

// Local includes

#include "yfalbum.h"
#include "wsnewalbumdialog.h"

using namespace Digikam;

namespace DigikamGenericYFPlugin
{

class YFNewAlbumDlg: public WSNewAlbumDialog
{
    Q_OBJECT

public:

    explicit YFNewAlbumDlg(QWidget* const parent, YandexFotkiAlbum& album);
    ~YFNewAlbumDlg() override;

    YandexFotkiAlbum& album() const;

private Q_SLOTS:

    void slotOkClicked();

private:

    class Private;
    Private* const d;
};

} // namespace DigikamGenericYFPlugin

#endif // DIGIKAM_YF_NEW_ALBUM_DLG_H
