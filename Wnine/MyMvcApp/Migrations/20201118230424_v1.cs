using System;
using Microsoft.EntityFrameworkCore.Migrations;

namespace MyMvcApp.Migrations
{
    public partial class v1 : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "Adicionales",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    Titulo = table.Column<string>(type: "longtext", nullable: true),
                    CostoEnPesos = table.Column<float>(type: "float", nullable: false),
                    Restantes = table.Column<int>(type: "int", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Adicionales", x => x.ID);
                });

            migrationBuilder.CreateTable(
                name: "Ingredientes",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    Nombre = table.Column<string>(type: "longtext", nullable: true),
                    RestanteEnKG = table.Column<float>(type: "float", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Ingredientes", x => x.ID);
                });

            migrationBuilder.CreateTable(
                name: "Pizzas",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    Titulo = table.Column<string>(type: "longtext", nullable: true),
                    CostoEnPesos = table.Column<float>(type: "float", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Pizzas", x => x.ID);
                });

            migrationBuilder.CreateTable(
                name: "Pizzerias",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    Titulo = table.Column<string>(type: "longtext", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Pizzerias", x => x.ID);
                });

            migrationBuilder.CreateTable(
                name: "Usuarios",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    Nombre = table.Column<string>(type: "longtext", nullable: true),
                    Apellido = table.Column<string>(type: "longtext", nullable: true),
                    Telefono = table.Column<string>(type: "longtext", nullable: true),
                    Celular = table.Column<string>(type: "longtext", nullable: true),
                    Email = table.Column<string>(type: "longtext", nullable: true),
                    Cuidad = table.Column<string>(type: "longtext", nullable: true),
                    Pais = table.Column<string>(type: "longtext", nullable: true),
                    FechaNacimiento = table.Column<DateTime>(type: "datetime(6)", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Usuarios", x => x.ID);
                });

            migrationBuilder.CreateTable(
                name: "IngredientePizza",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    PizzaID = table.Column<string>(type: "varchar(255)", nullable: true),
                    IngredienteID = table.Column<string>(type: "varchar(255)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_IngredientePizza", x => x.ID);
                    table.ForeignKey(
                        name: "FK_IngredientePizza_Ingredientes_IngredienteID",
                        column: x => x.IngredienteID,
                        principalTable: "Ingredientes",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_IngredientePizza_Pizzas_PizzaID",
                        column: x => x.PizzaID,
                        principalTable: "Pizzas",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "Menus",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    PizzeriaID = table.Column<string>(type: "varchar(255)", nullable: true),
                    DiaSemana = table.Column<int>(type: "int", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Menus", x => x.ID);
                    table.ForeignKey(
                        name: "FK_Menus_Pizzerias_PizzeriaID",
                        column: x => x.PizzeriaID,
                        principalTable: "Pizzerias",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "Pagos",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    TimeStamp = table.Column<DateTime>(type: "datetime(6)", nullable: false),
                    MontoPagadoEnPesos = table.Column<float>(type: "float", nullable: false),
                    UsuarioID = table.Column<string>(type: "varchar(255)", nullable: true),
                    PizzeriaID = table.Column<string>(type: "varchar(255)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Pagos", x => x.ID);
                    table.ForeignKey(
                        name: "FK_Pagos_Pizzerias_PizzeriaID",
                        column: x => x.PizzeriaID,
                        principalTable: "Pizzerias",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_Pagos_Usuarios_UsuarioID",
                        column: x => x.UsuarioID,
                        principalTable: "Usuarios",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "Bebidas",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    Type = table.Column<string>(type: "longtext", nullable: true),
                    Titulo = table.Column<string>(type: "longtext", nullable: true),
                    MiliLitros = table.Column<int>(type: "int", nullable: false),
                    CostoEnPesos = table.Column<float>(type: "float", nullable: false),
                    Carbonatada = table.Column<bool>(type: "tinyint(1)", nullable: false),
                    GradosAlcohol = table.Column<float>(type: "float", nullable: false),
                    MenuID = table.Column<string>(type: "varchar(255)", nullable: true),
                    Discriminator = table.Column<string>(type: "longtext", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Bebidas", x => x.ID);
                    table.ForeignKey(
                        name: "FK_Bebidas_Menus_MenuID",
                        column: x => x.MenuID,
                        principalTable: "Menus",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "OpcionesMenu",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    MenuID = table.Column<string>(type: "varchar(255)", nullable: true),
                    PizzaID = table.Column<string>(type: "varchar(255)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_OpcionesMenu", x => x.ID);
                    table.ForeignKey(
                        name: "FK_OpcionesMenu_Menus_MenuID",
                        column: x => x.MenuID,
                        principalTable: "Menus",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_OpcionesMenu_Pizzas_PizzaID",
                        column: x => x.PizzaID,
                        principalTable: "Pizzas",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "Ordenes",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    Despachada = table.Column<bool>(type: "tinyint(1)", nullable: false),
                    PuestoEnLaCola = table.Column<int>(type: "int", nullable: false),
                    UsuarioID = table.Column<string>(type: "varchar(255)", nullable: true),
                    TimeStamp = table.Column<DateTime>(type: "datetime(6)", nullable: false),
                    PagoID = table.Column<string>(type: "varchar(255)", nullable: true),
                    PizzeriaID = table.Column<string>(type: "varchar(255)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Ordenes", x => x.ID);
                    table.ForeignKey(
                        name: "FK_Ordenes_Pagos_PagoID",
                        column: x => x.PagoID,
                        principalTable: "Pagos",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_Ordenes_Pizzerias_PizzeriaID",
                        column: x => x.PizzeriaID,
                        principalTable: "Pizzerias",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_Ordenes_Usuarios_UsuarioID",
                        column: x => x.UsuarioID,
                        principalTable: "Usuarios",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "OrdenesAdicionales",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    OrdenID = table.Column<string>(type: "varchar(255)", nullable: true),
                    AdicionalID = table.Column<string>(type: "varchar(255)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_OrdenesAdicionales", x => x.ID);
                    table.ForeignKey(
                        name: "FK_OrdenesAdicionales_Adicionales_AdicionalID",
                        column: x => x.AdicionalID,
                        principalTable: "Adicionales",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_OrdenesAdicionales_Ordenes_OrdenID",
                        column: x => x.OrdenID,
                        principalTable: "Ordenes",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "OrdenesBebidas",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    OrdenID = table.Column<string>(type: "varchar(255)", nullable: true),
                    BebidaID = table.Column<string>(type: "varchar(255)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_OrdenesBebidas", x => x.ID);
                    table.ForeignKey(
                        name: "FK_OrdenesBebidas_Bebidas_BebidaID",
                        column: x => x.BebidaID,
                        principalTable: "Bebidas",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_OrdenesBebidas_Ordenes_OrdenID",
                        column: x => x.OrdenID,
                        principalTable: "Ordenes",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateTable(
                name: "OrdenesPizzas",
                columns: table => new
                {
                    ID = table.Column<string>(type: "varchar(255)", nullable: false),
                    OrdenID = table.Column<string>(type: "varchar(255)", nullable: true),
                    PizzaID = table.Column<string>(type: "varchar(255)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_OrdenesPizzas", x => x.ID);
                    table.ForeignKey(
                        name: "FK_OrdenesPizzas_Ordenes_OrdenID",
                        column: x => x.OrdenID,
                        principalTable: "Ordenes",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                    table.ForeignKey(
                        name: "FK_OrdenesPizzas_Pizzas_PizzaID",
                        column: x => x.PizzaID,
                        principalTable: "Pizzas",
                        principalColumn: "ID",
                        onDelete: ReferentialAction.Restrict);
                });

            migrationBuilder.CreateIndex(
                name: "IX_Bebidas_MenuID",
                table: "Bebidas",
                column: "MenuID");

            migrationBuilder.CreateIndex(
                name: "IX_IngredientePizza_IngredienteID",
                table: "IngredientePizza",
                column: "IngredienteID");

            migrationBuilder.CreateIndex(
                name: "IX_IngredientePizza_PizzaID",
                table: "IngredientePizza",
                column: "PizzaID");

            migrationBuilder.CreateIndex(
                name: "IX_Menus_PizzeriaID",
                table: "Menus",
                column: "PizzeriaID");

            migrationBuilder.CreateIndex(
                name: "IX_OpcionesMenu_MenuID",
                table: "OpcionesMenu",
                column: "MenuID");

            migrationBuilder.CreateIndex(
                name: "IX_OpcionesMenu_PizzaID",
                table: "OpcionesMenu",
                column: "PizzaID");

            migrationBuilder.CreateIndex(
                name: "IX_Ordenes_PagoID",
                table: "Ordenes",
                column: "PagoID");

            migrationBuilder.CreateIndex(
                name: "IX_Ordenes_PizzeriaID",
                table: "Ordenes",
                column: "PizzeriaID");

            migrationBuilder.CreateIndex(
                name: "IX_Ordenes_UsuarioID",
                table: "Ordenes",
                column: "UsuarioID");

            migrationBuilder.CreateIndex(
                name: "IX_OrdenesAdicionales_AdicionalID",
                table: "OrdenesAdicionales",
                column: "AdicionalID");

            migrationBuilder.CreateIndex(
                name: "IX_OrdenesAdicionales_OrdenID",
                table: "OrdenesAdicionales",
                column: "OrdenID");

            migrationBuilder.CreateIndex(
                name: "IX_OrdenesBebidas_BebidaID",
                table: "OrdenesBebidas",
                column: "BebidaID");

            migrationBuilder.CreateIndex(
                name: "IX_OrdenesBebidas_OrdenID",
                table: "OrdenesBebidas",
                column: "OrdenID");

            migrationBuilder.CreateIndex(
                name: "IX_OrdenesPizzas_OrdenID",
                table: "OrdenesPizzas",
                column: "OrdenID");

            migrationBuilder.CreateIndex(
                name: "IX_OrdenesPizzas_PizzaID",
                table: "OrdenesPizzas",
                column: "PizzaID");

            migrationBuilder.CreateIndex(
                name: "IX_Pagos_PizzeriaID",
                table: "Pagos",
                column: "PizzeriaID");

            migrationBuilder.CreateIndex(
                name: "IX_Pagos_UsuarioID",
                table: "Pagos",
                column: "UsuarioID");
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "IngredientePizza");

            migrationBuilder.DropTable(
                name: "OpcionesMenu");

            migrationBuilder.DropTable(
                name: "OrdenesAdicionales");

            migrationBuilder.DropTable(
                name: "OrdenesBebidas");

            migrationBuilder.DropTable(
                name: "OrdenesPizzas");

            migrationBuilder.DropTable(
                name: "Ingredientes");

            migrationBuilder.DropTable(
                name: "Adicionales");

            migrationBuilder.DropTable(
                name: "Bebidas");

            migrationBuilder.DropTable(
                name: "Ordenes");

            migrationBuilder.DropTable(
                name: "Pizzas");

            migrationBuilder.DropTable(
                name: "Menus");

            migrationBuilder.DropTable(
                name: "Pagos");

            migrationBuilder.DropTable(
                name: "Pizzerias");

            migrationBuilder.DropTable(
                name: "Usuarios");
        }
    }
}
