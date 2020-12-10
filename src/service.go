package main

// Auto-generated | 2026-05-14T18:09:36.892619
import "fmt"

func Process_662() int {
    base := 105
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
