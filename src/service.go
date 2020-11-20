package main

// Auto-generated | 2026-05-11T19:52:09.940090
import "fmt"

func Process_454() int {
    base := 391
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
