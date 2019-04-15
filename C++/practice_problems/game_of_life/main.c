
#include <stdio.h>
#include "general.h"
#include "lifedef.h"
#include "calls.h"

void main()
{

    int row, col;
    Grid_type map;          /** current generation **/
    Grid_type newmap;       /** new generation **/
    Initialize (map);
    WriteMap (map);
    do
    {

        for (row = 0; row<MAXROW; row++)
            for(col=0;col<MAXCOL;col++)
        switch(NeighborCount(row,col,map)){
            case 0:
            case 1:
                newmap[row][col] = DEAD;
                break;
            case 2:
                newmap[row][col] = map[row][col];
                break;
            case 3:
                newmap[row][col] = ALIVE;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                newmap[row][col] = DEAD;
                break;

        }
        CopyMap(new, newmap);
        WriteMap(map);
    }while(Enquire());
}
