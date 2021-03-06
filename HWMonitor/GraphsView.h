//
//  HWMonitorGraphsView.h
//  HWSensors
//
//  Created by kozlek on 07.07.12.
//

/*
 *  Copyright (c) 2013 Natan Zalkin <natan.zalkin@me.com>. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 *
 */

#import "GraphsController.h"

@class HWMGraphsGroup;

@interface GraphsView : NSView
{
    NSRect _graphBounds;
    double _maxPoints;
    NSDictionary *_legendAttributes;
}

@property (assign) IBOutlet GraphsController *graphsController;

@property (nonatomic, strong) HWMGraphsGroup *graphsGroup;

- (void)calculateGraphBounds;

@end
