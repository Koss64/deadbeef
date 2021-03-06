/* ddbequalizer.h generated by valac 0.10.2, the Vala compiler, do not modify */


#ifndef __DDBEQUALIZER_H__
#define __DDBEQUALIZER_H__

#include <glib.h>
#include <gtk/gtk.h>
#include <float.h>
#include <math.h>

G_BEGIN_DECLS


#define DDB_TYPE_EQUALIZER (ddb_equalizer_get_type ())
#define DDB_EQUALIZER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DDB_TYPE_EQUALIZER, DdbEqualizer))
#define DDB_EQUALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DDB_TYPE_EQUALIZER, DdbEqualizerClass))
#define DDB_IS_EQUALIZER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DDB_TYPE_EQUALIZER))
#define DDB_IS_EQUALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DDB_TYPE_EQUALIZER))
#define DDB_EQUALIZER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DDB_TYPE_EQUALIZER, DdbEqualizerClass))

typedef struct _DdbEqualizer DdbEqualizer;
typedef struct _DdbEqualizerClass DdbEqualizerClass;
typedef struct _DdbEqualizerPrivate DdbEqualizerPrivate;

struct _DdbEqualizer {
	GtkDrawingArea parent_instance;
	DdbEqualizerPrivate * priv;
};

struct _DdbEqualizerClass {
	GtkDrawingAreaClass parent_class;
};


GType ddb_equalizer_get_type (void) G_GNUC_CONST;
void ddb_equalizer_set_band (DdbEqualizer* self, gint band, double v);
double ddb_equalizer_get_band (DdbEqualizer* self, gint band);
void ddb_equalizer_set_preamp (DdbEqualizer* self, double v);
double ddb_equalizer_get_preamp (DdbEqualizer* self);
DdbEqualizer* ddb_equalizer_new (void);
DdbEqualizer* ddb_equalizer_construct (GType object_type);


G_END_DECLS

#endif
