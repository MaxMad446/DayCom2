package main

// Auto-generated | 2026-05-14T18:10:35.883302
import "fmt"

func Process_799() int {
    base := 486
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_799())
}
