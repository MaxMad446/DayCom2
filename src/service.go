package main

// Auto-generated | 2026-05-14T06:28:18.509987
import "fmt"

func Process_812() int {
    base := 471
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
