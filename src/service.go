package main

// Auto-generated | 2026-05-14T06:27:17.660507
import "fmt"

func Process_799() int {
    base := 189
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_799())
}
