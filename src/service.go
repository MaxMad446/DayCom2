package main

// Auto-generated | 2026-05-12T03:58:54.535580
import "fmt"

func Process_344() int {
    base := 419
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_344())
}
