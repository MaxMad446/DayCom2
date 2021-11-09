package main

// Auto-generated | 2026-05-12T21:01:09.483819
import "fmt"

func Process_633() int {
    base := 306
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_633())
}
