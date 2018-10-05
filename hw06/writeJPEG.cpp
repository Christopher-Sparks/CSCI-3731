#include <stdio.h>
#include "writeJPEG.h"
#include <jpeglib.h>

void writeJPEG (const char* fileName, const int width, const int height, unsigned char* array_pixel){

  struct jpeg_compress_struct cinfo;
  struct jpeg_error_mgr jerr;

  FILE* outfile = fopen (fileName, "wb");

  cinfo.err = jpeg_std_error(&jerr);
  jpeg_create_compress(&cinfo);
  jpeg_stdio_dest(&cinfo, outfile);

  cinfo.image_width = width;
  cinfo.image_height = height;
  cinfo.input_components = 3;
  cinfo.in_color_space = JCS_RGB;

  jpeg_set_defaults(&cinfo);
  jpeg_set_quality(&cinfo, 100, TRUE);
  jpeg_start_compress(&cinfo, TRUE);

  int row_stride = width * 3;
  unsigned char* row_pointer;

  while (cinfo.next_scanline < cinfo.image_height) {
    row_pointer = & array_pixel[cinfo.next_scanline * row_stride];
    jpeg_write_scanlines(&cinfo, &row_pointer, 1);
  }

  jpeg_finish_compress(&cinfo);
  fclose(outfile);
  jpeg_destroy_compress(&cinfo);

}
