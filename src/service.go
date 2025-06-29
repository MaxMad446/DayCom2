package main

// Auto-generated | 2026-05-12T04:16:20.786594
import "fmt"

func Process_445() int {
    base := 425
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_445())
}
