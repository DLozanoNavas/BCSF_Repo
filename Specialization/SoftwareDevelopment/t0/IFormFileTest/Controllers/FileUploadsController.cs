using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;
using Microsoft.EntityFrameworkCore;
using IFormFileTest.Data;
using IFormFileTest.Models;

namespace IFormFileTest.Controllers
{
    public class FileUploadsController : Controller
    {
        private readonly DataContext _context;

        public FileUploadsController(DataContext context)
        {
            _context = context;
        }

        // GET: FileUploads
        public async Task<IActionResult> Index()
        {
            var dataContext = _context.FileUpload.Include(f => f.Persona);
            return View(await dataContext.ToListAsync());
        }

        // GET: FileUploads/Details/5
        public async Task<IActionResult> Details(string id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var fileUpload = await _context.FileUpload
                .Include(f => f.Persona)
                .FirstOrDefaultAsync(m => m.ID == id);
            if (fileUpload == null)
            {
                return NotFound();
            }

            return View(fileUpload);
        }

        // GET: FileUploads/Create
        public IActionResult Create()
        {
            ViewData["PersonaID"] = new SelectList(_context.Set<Persona>(), "ID", "ID");
            return View();
        }

        // POST: FileUploads/Create
        // To protect from overposting attacks, enable the specific properties you want to bind to.
        // For more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Create( FileUpload fileUpload)
        {
            if (ModelState.IsValid)
            {
                _context.Add(fileUpload);
                await _context.SaveChangesAsync();
                return RedirectToAction(nameof(Index));
            }
            System.IO.MemoryStream Image = new System.IO.MemoryStream();
            byte[] ImageBits = Image.ToArray();

            System.IO.File.WriteAllBytes("C:\\images....", ImageBits);

            ViewData["PersonaID"] = new SelectList(_context.Set<Persona>(), "ID", "ID", fileUpload.PersonaID);
            return View(fileUpload);
        }

        // GET: FileUploads/Edit/5
        public async Task<IActionResult> Edit(string id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var fileUpload = await _context.FileUpload.FindAsync(id);
            if (fileUpload == null)
            {
                return NotFound();
            }
            ViewData["PersonaID"] = new SelectList(_context.Set<Persona>(), "ID", "ID", fileUpload.PersonaID);
            return View(fileUpload);
        }

        // POST: FileUploads/Edit/5
        // To protect from overposting attacks, enable the specific properties you want to bind to.
        // For more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Edit(string id, [Bind("ID,FileName,URL,PersonaID")] FileUpload fileUpload)
        {
            if (id != fileUpload.ID)
            {
                return NotFound();
            }

            if (ModelState.IsValid)
            {
                try
                {
                    _context.Update(fileUpload);
                    await _context.SaveChangesAsync();
                }
                catch (DbUpdateConcurrencyException)
                {
                    if (!FileUploadExists(fileUpload.ID))
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
            ViewData["PersonaID"] = new SelectList(_context.Set<Persona>(), "ID", "ID", fileUpload.PersonaID);
            return View(fileUpload);
        }

        // GET: FileUploads/Delete/5
        public async Task<IActionResult> Delete(string id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var fileUpload = await _context.FileUpload
                .Include(f => f.Persona)
                .FirstOrDefaultAsync(m => m.ID == id);
            if (fileUpload == null)
            {
                return NotFound();
            }

            return View(fileUpload);
        }

        // POST: FileUploads/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> DeleteConfirmed(string id)
        {
            var fileUpload = await _context.FileUpload.FindAsync(id);
            _context.FileUpload.Remove(fileUpload);
            await _context.SaveChangesAsync();
            return RedirectToAction(nameof(Index));
        }

        private bool FileUploadExists(string id)
        {
            return _context.FileUpload.Any(e => e.ID == id);
        }
    }
}
