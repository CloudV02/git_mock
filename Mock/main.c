#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
 
 
typedef struct 
{
    uint32_t bootstrap[3];
    uint32_t manufacturer_description[8];
    uint32_t Number_of_bytes_per_block[2];
    uint32_t Number_of_blocks[1];
    uint32_t Number_of_reserved_blocks[1];
    uint32_t Number_FAT[1];
    uint32_t Number_of_root_directory[2];
    uint32_t Total_blocks[2];
    uint32_t Media_Descriptor[1];
    uint32_t Number_of_Blocks_per_Fat[2]; //0x16
    uint32_t The_number_of_blocks_per_track[2]; //0x18
    uint32_t File_system_identifier[8];// 0x36
    
}boot_block;
 
void main()
{
    boot_block block1;
    uint32_t *ptr2;
    FILE *ptr = fopen("floppy.img","rb");;
//    uint32_t buffer[55],i,a; 
//    uint8_t buffer_data, count = 0;
//    FILE *ptr = fopen("floppy.img","rb");
//    if(ptr == NULL)
//    {
//        printf("File doesn't exist.'");
//    }
//    else
//    {
//        while( feof(ptr) == 0)
//        {
//            buffer_data = fgetc(ptr);
//            printf("%x",buffer_data);
//        }
//    }
//    
    ptr2 = data(ptr);
    fclose(ptr);
 
}
 
uint32_t data(FILE *File_ptr)
{
    uint32_t buffer[512],i;
    
        for(i = 0; i< 63; i++)
    {
        fread(buffer, 1, 1, *File_ptr);
    }
    
 
    return buffer;
}
