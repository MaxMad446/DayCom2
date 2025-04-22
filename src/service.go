package main

// Auto-generated | 2026-05-12T21:17:26.883546
import "fmt"

func Process_545() int {
    base := 467
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_545())
}
