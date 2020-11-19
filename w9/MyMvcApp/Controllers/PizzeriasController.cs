using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;
using Microsoft.EntityFrameworkCore;
using MyMvcApp.Data;
using MyMvcApp.Models;

namespace MyMvcApp.Controllers
{
    public class PizzeriasController : Controller
    {
        private readonly DataBaseContext _context;

        public PizzeriasController(DataBaseContext context)
        {
            _context = context;
        }

        // GET: Pizzerias
        public async Task<IActionResult> Index()
        {
            return View(await _context.Pizzerias.ToListAsync());
        }

        // GET: Pizzerias/Details/5
        public async Task<IActionResult> Details(string id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var pizzeria = await _context.Pizzerias
                .FirstOrDefaultAsync(m => m.ID == id);
            if (pizzeria == null)
            {
                return NotFound();
            }

            return View(pizzeria);
        }

        // GET: Pizzerias/Create
        public IActionResult Create()
        {
            return View();
        }

        // POST: Pizzerias/Create
        // To protect from overposting attacks, enable the specific properties you want to bind to.
        // For more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Create([Bind("ID,Titulo")] Pizzeria pizzeria)
        {
            if (ModelState.IsValid)
            {
                _context.Add(pizzeria);
                await _context.SaveChangesAsync();
                return RedirectToAction(nameof(Index));
            }
            return View(pizzeria);
        }

        // GET: Pizzerias/Edit/5
        public async Task<IActionResult> Edit(string id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var pizzeria = await _context.Pizzerias.FindAsync(id);
            if (pizzeria == null)
            {
                return NotFound();
            }
            return View(pizzeria);
        }

        // POST: Pizzerias/Edit/5
        // To protect from overposting attacks, enable the specific properties you want to bind to.
        // For more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Edit(string id, [Bind("ID,Titulo")] Pizzeria pizzeria)
        {
            if (id != pizzeria.ID)
            {
                return NotFound();
            }

            if (ModelState.IsValid)
            {
                try
                {
                    _context.Update(pizzeria);
                    await _context.SaveChangesAsync();
                }
                catch (DbUpdateConcurrencyException)
                {
                    if (!PizzeriaExists(pizzeria.ID))
                    {
                        return NotFound();
                    }
                    else
                    {
                        throw;
                    }
                }
                return RedirectToAction(nameof(Index));
            }
            return View(pizzeria);
        }

        // GET: Pizzerias/Delete/5
        public async Task<IActionResult> Delete(string id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var pizzeria = await _context.Pizzerias
                .FirstOrDefaultAsync(m => m.ID == id);
            if (pizzeria == null)
            {
                return NotFound();
            }

            return View(pizzeria);
        }

        // POST: Pizzerias/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> DeleteConfirmed(string id)
        {
            var pizzeria = await _context.Pizzerias.FindAsync(id);
            _context.Pizzerias.Remove(pizzeria);
            await _context.SaveChangesAsync();
            return RedirectToAction(nameof(Index));
        }

        private bool PizzeriaExists(string id)
        {
            return _context.Pizzerias.Any(e => e.ID == id);
        }
    }
}
