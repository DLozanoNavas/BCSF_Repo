CREATE TABLE IF NOT EXISTS "__EFMigrationsHistory" (
    "MigrationId" TEXT NOT NULL CONSTRAINT "PK___EFMigrationsHistory" PRIMARY KEY,
    "ProductVersion" TEXT NOT NULL
);

BEGIN TRANSACTION;

CREATE TABLE "Tienda" (
    "ID" INTEGER NOT NULL CONSTRAINT "PK_Tienda" PRIMARY KEY AUTOINCREMENT,
    "Email" TEXT NOT NULL,
    "Nombre" TEXT NOT NULL,
    "Direccion" TEXT NOT NULL,
    "Telefono" TEXT NOT NULL,
    "Abierto" INTEGER NOT NULL,
    "BalanceCaja" TEXT NOT NULL
);

CREATE TABLE "Producto" (
    "ID" INTEGER NOT NULL CONSTRAINT "PK_Producto" PRIMARY KEY AUTOINCREMENT,
    "SKU" TEXT NOT NULL,
    "Title" TEXT NOT NULL,
    "Precio" TEXT NOT NULL,
    "CantidadStock" INTEGER NOT NULL,
    "TiendaID" INTEGER NOT NULL,
    CONSTRAINT "FK_Producto_Tienda_TiendaID" FOREIGN KEY ("TiendaID") REFERENCES "Tienda" ("ID") ON DELETE CASCADE
);

CREATE INDEX "IX_Producto_TiendaID" ON "Producto" ("TiendaID");

INSERT INTO "__EFMigrationsHistory" ("MigrationId", "ProductVersion")
VALUES ('20220316005534_Initial', '6.0.3');

COMMIT;

BEGIN TRANSACTION;

CREATE TABLE "ef_temp_Tienda" (
    "ID" INTEGER NOT NULL CONSTRAINT "PK_Tienda" PRIMARY KEY AUTOINCREMENT,
    "Abierto" INTEGER NOT NULL,
    "BalanceCaja" TEXT NOT NULL,
    "Direccion" TEXT NULL,
    "Email" TEXT NULL,
    "Nombre" TEXT NULL,
    "Telefono" TEXT NULL
);

INSERT INTO "ef_temp_Tienda" ("ID", "Abierto", "BalanceCaja", "Direccion", "Email", "Nombre", "Telefono")
SELECT "ID", "Abierto", "BalanceCaja", "Direccion", "Email", "Nombre", "Telefono"
FROM "Tienda";

CREATE TABLE "ef_temp_Producto" (
    "ID" INTEGER NOT NULL CONSTRAINT "PK_Producto" PRIMARY KEY AUTOINCREMENT,
    "CantidadStock" INTEGER NOT NULL,
    "Precio" TEXT NOT NULL,
    "SKU" TEXT NULL,
    "TiendaID" INTEGER NOT NULL,
    "Title" TEXT NULL,
    CONSTRAINT "FK_Producto_Tienda_TiendaID" FOREIGN KEY ("TiendaID") REFERENCES "Tienda" ("ID") ON DELETE CASCADE
);

INSERT INTO "ef_temp_Producto" ("ID", "CantidadStock", "Precio", "SKU", "TiendaID", "Title")
SELECT "ID", "CantidadStock", "Precio", "SKU", "TiendaID", "Title"
FROM "Producto";

COMMIT;

PRAGMA foreign_keys = 0;

BEGIN TRANSACTION;

DROP TABLE "Tienda";

ALTER TABLE "ef_temp_Tienda" RENAME TO "Tienda";

DROP TABLE "Producto";

ALTER TABLE "ef_temp_Producto" RENAME TO "Producto";

COMMIT;

PRAGMA foreign_keys = 1;

BEGIN TRANSACTION;

CREATE INDEX "IX_Producto_TiendaID" ON "Producto" ("TiendaID");

INSERT INTO "__EFMigrationsHistory" ("MigrationId", "ProductVersion")
VALUES ('20220316010232_ArreglaNullsTiendaYProducto', '6.0.3');

COMMIT;

