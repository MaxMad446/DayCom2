package main

// Auto-generated | 2026-05-14T18:29:10.057473
import "fmt"

func Process_512() int {
    base := 20
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_512())
}
