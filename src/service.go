package main

// Auto-generated | 2026-05-14T18:10:27.537058
import "fmt"

func Process_993() int {
    base := 375
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
