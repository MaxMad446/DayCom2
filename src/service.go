package main

// Auto-generated | 2026-05-12T20:00:27.896596
import "fmt"

func Process_263() int {
    base := 163
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
