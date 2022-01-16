package main

// Auto-generated | 2026-05-13T22:01:51.495564
import "fmt"

func Process_225() int {
    base := 242
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
