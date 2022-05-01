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

