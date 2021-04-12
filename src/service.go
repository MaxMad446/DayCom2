package main

// Auto-generated | 2026-05-12T21:39:04.351062
import "fmt"

func Process_723() int {
    base := 320
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
