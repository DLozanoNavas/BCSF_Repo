using Microsoft.EntityFrameworkCore.Metadata;
using Microsoft.EntityFrameworkCore.Migrations;

namespace MySQL.Migrations
{
    public partial class InitialCreate : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "Paises",
                columns: table => new
                {
                    ID = table.Column<string>(nullable: false),
                    Nombre = table.Column<string>(nullable: true),
                    Habitantes = table.Column<int>(nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Paises", x => x.ID);
                });

            migrationBuilder.CreateTable(
                name: "Banderas",
                columns: table => new
                {
                    ID = table.Column<int>(nullable: false)
                        .Annotation("MySql:ValueGenerationStrategy", MySqlValueGenerationStrategy.IdentityColumn),
                    URL_Bandera = table.Column<string>(nullable: true),
                    PaisID = table.Column<string>(nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Banderas", x => x.ID);
                    table.ForeignKey(
                        name: "FK_Banderas_Paises_PaisID",
                        column: x => x.PaisID,
                        principalTable: "Paises",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "Cuidades",
                columns: table => new
                {
                    ID = table.Column<string>(nullable: false),
                    Nombre = table.Column<string>(nullable: true),
                    PaisID = table.Column<string>(nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Cuidades", x => x.ID);
                    table.ForeignKey(
                        name: "FK_Cuidades_Paises_PaisID",
                        column: x => x.PaisID,
                        principalTable: "Paises",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "Usuarios",
                columns: table => new
                {
                    ID = table.Column<int>(nullable: false)
                        .Annotation("MySql:ValueGenerationStrategy", MySqlValueGenerationStrategy.IdentityColumn),
                    Nombre = table.Column<string>(nullable: true),
                    Email = table.Column<string>(nullable: true),
                    PaisID = table.Column<string>(nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Usuarios", x => x.ID);
                    table.ForeignKey(
                        name: "FK_Usuarios_Paises_PaisID",
                        column: x => x.PaisID,
                        principalTable: "Paises",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "CuidadesUsuarios",
                columns: table => new
                {
                    ID = table.Column<int>(nullable: false)
                        .Annotation("MySql:ValueGenerationStrategy", MySqlValueGenerationStrategy.IdentityColumn),
                    UserID = table.Column<int>(nullable: false),
                    UsuarioID = table.Column<int>(nullable: true),
                    CuidadID = table.Column<string>(nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_CuidadesUsuarios", x => x.ID);
                    table.ForeignKey(
                        name: "FK_CuidadesUsuarios_Cuidades_CuidadID",
                        column: x => x.CuidadID,
                        principalTable: "Cuidades",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_CuidadesUsuarios_Usuarios_UsuarioID",
                        column: x => x.UsuarioID,
                        principalTable: "Usuarios",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateIndex(
                name: "IX_Banderas_PaisID",
                table: "Banderas",
                column: "PaisID",
                unique: true);

            migrationBuilder.CreateIndex(
                name: "IX_Cuidades_PaisID",
                table: "Cuidades",
                column: "PaisID");

            migrationBuilder.CreateIndex(
                name: "IX_CuidadesUsuarios_CuidadID",
                table: "CuidadesUsuarios",
                column: "CuidadID");

            migrationBuilder.CreateIndex(
                name: "IX_CuidadesUsuarios_UsuarioID",
                table: "CuidadesUsuarios",
                column: "UsuarioID");

            migrationBuilder.CreateIndex(
                name: "IX_Usuarios_PaisID",
                table: "Usuarios",
                column: "PaisID");
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "Banderas");

            migrationBuilder.DropTable(
                name: "CuidadesUsuarios");

            migrationBuilder.DropTable(
                name: "Cuidades");

            migrationBuilder.DropTable(
                name: "Usuarios");

            migrationBuilder.DropTable(
                name: "Paises");
        }
    }
}
